/*
 * Copyright (C) 2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <string>
#include <vector>

// Match the CYG1 vendor ABI, including the indirect return of HyPerToken.
struct HyPerToken {
    int pid;
    int id;
    std::string processName;
};

HyPerToken hyper_getNewHyPerToken() {
    return {0, -1, {}};
}

void hyper_setTokenProcName(HyPerToken*, std::string) {
}

void hyper_checkResourceExist(int) {
}

bool hyper_checkHintExist(int) {
    return false;
}

void hyper_acquire(HyPerToken, std::vector<int>) {
}

void hyper_acquire(HyPerToken, int, std::vector<int>) {
}

void hyper_setProcName(std::string) {
}

void hyper_getSupportedFrequency(int, int) {
}

void hyper_release(HyPerToken) {
}
