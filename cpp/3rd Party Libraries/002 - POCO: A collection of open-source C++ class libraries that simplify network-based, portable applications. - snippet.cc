#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/StreamCopier.h>
#include <iostream>
#include <string>

int main()
{
    // Create a session to the server
    Poco::Net::HTTPClientSession session("www.example.com");

    // Create a GET HTTP request
    Poco::Net::HTTPRequest request(Poco::Net::HTTPRequest::HTTP_GET, "/");

    // Send the request
    session.sendRequest(request);

    // Get the response
    Poco::Net::HTTPResponse response;
    std::istream& rs = session.receiveResponse(response);

    // Copy the response stream to the standard output
    Poco::StreamCopier::copyStream(rs, std::cout);

    return 0;
}
