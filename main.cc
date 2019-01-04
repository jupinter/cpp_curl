/**
 * HTTPDownloaderExample.cpp
 *
 * A simple C++ wrapper for the libcurl easy API.
 * This file contains example code on how to use the HTTPDownloader class.
 *
 * Compile like this: g++ -o HTTPDownloaderExample HTTPDownloaderExample.cpp HTTPDownloader.cpp -lcurl
 *
 * Written by Uli Köhler (techoverflow.net)
 * Published under CC0 1.0 Universal (public domain)
 */
#include "downloader.h"
#include <iostream>
#include <string>
int main(int argc, char** argv) {
    HTTPDownloader downloader;
    std::string content = downloader.download(argv[1]);
    FILE *audio = fopen(argv[2], "wb");
    if (!audio) return false;
    fwrite(content.c_str(), content.length(), 1, audio);
    return true;
}

