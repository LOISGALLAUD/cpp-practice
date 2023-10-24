#include <cpr/cpr.h>
#include <fstream>
#include <iostream>

#define TIMEOUT_MS 5000

int main()
{
    std::string targetUrl = "httpbin/org/ip";
    std::ofstream myfile("proxy-cpr.txt");

    // Utilisez cpr::Timeout pour définir le timeout
    cpr::Response r = cpr::Get(cpr::Url{"https://free-proxy-list.net/"},
                               // cpr::Proxies{{"http", "50.171.32.228:80"}},
                               cpr::Timeout{TIMEOUT_MS});

    if (r.error)
    {
        std::cerr << "TIMEOUT ERROR" << std::endl;
    }
    else if (r.status_code == 200)
    {
        // std::cout << r.text << std::endl;
        myfile << r.text << std::endl;
    }
    else
    {
        std::cerr << "ERROR " << r.status_code << std::endl;
    }

    myfile.close();
    return 0;
}
