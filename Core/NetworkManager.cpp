//
// Created by iMac GWS on 1/29/20.
//
#include <string>
#include "NetworkManager.h"
using namespace std;


NetworkManager :: NetworkManager() {
    this->accountId = "";
    this->filialId = "";
    this->projectCode = "";
}

NetworkManager :: NetworkManager(string accountId) {
    this->accountId = accountId;
    this->filialId = "";
    this->projectCode = "";
}

void NetworkManager::initialize(string accountId) {
     instance = NetworkManager(accountId);
}

void NetworkManager::setFilial(string filialId) {
     instance.filialId = filialId;
}

void NetworkManager::setProject(string projectCode) {
     instance.projectCode = projectCode;
     instance.filialId = "";
}

NetworkManager NetworkManager::shared() {
     return instance;
}
