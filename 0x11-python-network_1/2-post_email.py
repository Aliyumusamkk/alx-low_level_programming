#!/usr/bin/python3:
import urllib.request
import urllib.parse
import sys

def send_post_request(url, email):
    try:
        data = urllib.parse.urlencode({'email': email}).encode('utf-8')
        req = urllib.request.Request(url, data=data, method='POST')
        with urllib.request.urlopen(req) as response:
            body = response.read().decode('utf-8')
            print(f"Response Body: {body}")
    except urllib.error.URLError as e:
        print(f"Error: {e}")

# Input the URL and email
url = input("Enter the URL: ")
email = input("Enter the email: ")
send_post_request(url, email)
