//
// Created by iMac GWS on 1/29/20.
//

#ifndef CORE_NETWORKMANAGER_H
#define CORE_NETWORKMANAGER_H
#include <string>
using namespace std;

class NetworkManager {
    // field
    private: string accountId;
    private: string filialId = "";
    private: string projectCode = "";
    private: static NetworkManager instance;

    // singleton
    public: static NetworkManager shared();

    // methods
    public: static void initialize(string accountId);
    public: static void setFilial(string filialId);
    public: static void setProject(string projectCode);

    // constructors
    private: NetworkManager();
    private: explicit NetworkManager(string accountId);
};


#endif //CORE_NETWORKMANAGER_H
