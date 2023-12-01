#!/usr/bin/python3
import urllib.request
import sys

def get_x_request_id(url):
    try:
        with urllib.request.urlopen(url) as response:
            x_request_id = response.headers.get('X-Request-Id')
            if x_request_id:
                print(f"X-Request-Id: {x_request_id}")
            else:
                print("X-Request-Id header not found in the response.")
    except urllib.error.URLError as e:
        print(f"Error: {e}")

# Input the URL you want to send the request to
url = input("https://alx-intranet.hbtn.io/status: ")
get_x_request_id(https://alx-intranet.hbtn.io/status)
