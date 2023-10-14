# HTTP
This code demonstrates how to use libcurl to make a simple HTTP GET request. The URL is set to "http://example.com", and the response data is written to a string using a callback function. The response data is then printed to the console.

Please note that to compile this code, you need to link against the libcurl library. If you're using g++, you can do this by adding `-lcurl` to your command line. For example:

```bash
g++ main.cpp -lcurl -o main
```

Also, please note that this is a very basic example. libcurl supports a lot of features, such as HTTPS, cookies, redirects, and much more. You can check the libcurl documentation for more information: https://curl.haxx.se/libcurl/c/