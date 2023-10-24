#include <cpr/cpr.h>
#include <iostream>
#include <vector>

int main()
{
    // Liste de proxies
    std::vector<std::string> proxies = {
        "178.21.163.24:80",   "51.83.98.90:80",     "155.0.72.251:3128",
        "12.186.205.120:80",  "43.157.67.116:8888", "123.30.154.171:7777",
        "59.26.254.243:80",   "139.59.1.14:8080",   "50.172.75.122:80",
        "51.124.209.11:80",   "64.225.4.17:10005",  "141.136.42.164:80",
        "188.166.17.18:8881", "125.60.148.162:111"};

    // URL de la cible
    std::string targetUrl = "http://www.httpbin.org/ip";

    for (const std::string &proxy : proxies)
    {
        // Configurez le proxy pour cette itération
        cpr::Proxies proxy_config{{"http", proxy}};

        // Effectuez la requête en utilisant le proxy actuel
        cpr::Response response = cpr::Get(cpr::Url{targetUrl}, proxy_config);

        if (response.status_code == 200)
        {
            // La requête a réussi
            std::cout << "Proxy " << proxy
                      << " - IP de la page cible : " << response.text
                      << std::endl;
        }
        else
        {
            // La requête a échoué
            std::cerr << "Proxy " << proxy
                      << " - Échec de la requête : " << response.status_code
                      << std::endl;
        }
    }

    return 0;
}
