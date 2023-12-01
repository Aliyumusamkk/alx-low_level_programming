#!/usr/bin/python3
import urllib.request
import urllib.error
import sys

def get_response_body(url):
    try:
        with urllib.request.urlopen(url) as response:
            body = response.read().decode('utf-8')
            print(f"Response Body: {body}")
    except urllib.error.HTTPError as e:
        print(f"Error code: {e.code}")

# Input the URL you want to send the request to
url = input("Enter the URL: ")
get_response_body(url)
