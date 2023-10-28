#include <cpr/cpr.h>
#include <iostream>
#define TIMEOUT_MS 10000
int main()
{
    // Spécifiez l'URL de l'image que vous souhaitez télécharger
    std::string imageUrl = "https://opfrcdn.xyz/uploads/manga/berserk/chapters/"
                           "Volume%2022/000.jpg";

    // Effectuez une requête GET pour télécharger l'image
    std::string proxy = "35.236.207.242:33333";
    cpr::Proxies proxy_config{{"http", proxy}};
    cpr::Response response =
        cpr::Get(cpr::Url{imageUrl}, proxy_config, cpr::Timeout{TIMEOUT_MS});

    if (response.status_code == 200)
    {
        // La requête a réussi, et l'image a été téléchargée
        // Vous pouvez accéder aux données de l'image dans response.text
        // Par exemple, vous pouvez enregistrer l'image dans un fichier
        std::ofstream imageFile("downloaded_image.jpg", std::ios::binary);
        imageFile.write(response.text.c_str(), response.text.size());
        imageFile.close();
    }
    else
    {
        // La requête a échoué
        std::cerr << "Échec de la requête : " << response.status_code
                  << std::endl;
    }

    return 0;
}
