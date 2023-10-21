#include <curl/curl.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

size_t WriteData(void *ptr, size_t size, size_t nmemb, void *stream)
{
    size_t written = fwrite(ptr, size, nmemb, (FILE *)stream);
    return written;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        std::cout << "Utilisation: " << argv[0]
                  << " <URL de l'image> <nom du fichier de sortie>"
                  << std::endl;
        return 1;
    }
    srand(static_cast<unsigned int>(time(0)));

    std::string imageUrl = argv[1];
    std::string outputFileName = argv[2];
    std::vector<std::string> userAgents = {
        "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 "
        "(KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36",
        "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 "
        "(KHTML, like Gecko) Edge/91.0.864.67",
        "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 "
        "(KHTML, like Gecko) Firefox/90.0"};
    // std::vector<std::string> proxies = {
    //     "15.204.161.192:18080",
    // };

    CURL *curl;
    FILE *file;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, imageUrl.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        std::string randomUserAgent = userAgents[rand() % userAgents.size()];
        // std::string randomProxy = proxies[rand() % proxies.size()];
        // curl_easy_setopt(curl, CURLOPT_PROXY, randomProxy.c_str());
        curl_easy_setopt(curl, CURLOPT_USERAGENT, randomUserAgent.c_str());

        file = fopen(outputFileName.c_str(), "wb");
        if (file)
        {
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, file);
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteData);

            CURLcode res = curl_easy_perform(curl);
            if (res != CURLE_OK)
            {
                std::cerr << "Erreur lors du téléchargement de l'image: "
                          << curl_easy_strerror(res) << std::endl;
            }
            else
            {
                std::cout << "Image téléchargée avec succès." << std::endl;
            }

            fclose(file);
        }

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();

    return 0;
}
