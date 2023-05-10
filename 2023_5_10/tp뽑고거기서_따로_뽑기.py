import requests
from bs4 import BeautifulSoup

load_url = "https://news.daum.net/society#1"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")

#topic 으로 뽑기
topic = soup.find(class_="price_stock")
for el in topic.find_all("a"):
    print(el.text)
    url = el.get("href")
    print(url)
