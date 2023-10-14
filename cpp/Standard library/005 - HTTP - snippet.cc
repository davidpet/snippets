C++ does not have built-in support for HTTP in its standard library. However, there are several third-party libraries available that provide HTTP functionality. One of the most popular ones is libcurl, which is a free and easy-to-use client-side URL transfer library, supporting a lot of protocols including HTTP.

Here is a simple example of how to use libcurl to make a GET request:

#include <iostream>
#include <string>
#include <curl/curl.h>

// This function will be used to write response data to a string
static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp)
{
    size_t totalSize = size * nmemb;
    userp->append((char*)contents, totalSize);
    return totalSize;
}

int main()
{
    // Initialize a curl object
    CURL* curl = curl_easy_init();

    // Check if the curl object was initialized successfully
    if(curl) {
        CURLcode res;
        std::string readBuffer;

        // Set the URL
        curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");

        // Set the write callback function
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);

        // Set the data to pass to the write callback function
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Perform the request
        res = curl_easy_perform(curl);

        // Check if the request was successful
        if(res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

        // Print the response data
        std::cout << readBuffer << std::endl; // This will print the HTML content of http://example.com

        // Cleanup
        curl_easy_cleanup(curl);
    }

    return 0;
}