import requests
from bs4 import BeautifulSoup
import urllib
#※※※시험내기 좋다고 함※※※

#웹 페이지를 구해 해석한다.
load_url = "https://python.cyber.co.kr/pds/books/python2nd/test2.html"
html = requests.get(load_url)
soup = BeautifulSoup(html.content,"html.parser")

with open(filename, ‘wb’) as f:
   f.write(r.content)
   
# 모든 img 태그를 검색해 링크를 구한다.
for element in soup.find_all("img"):
    src = element.get("src")
    
    #절대 URL과 파일을 표시한다.
    image_url = urllib.parse.urljoin(load_url,src)
    filename = image_url.split("/")[-1]
    print(image_url, ">>",filename)

#--------------------------------------------------
#저장용 폴더를 만든다.
out_folder = Path("HJlink_text")
out_folder.mkdir(exist_ok=True)


#저장용 폴더를 만든다.
out_folder = Path("HJlink_text")
out_folder.mkdir(exist_ok=True)

# 파일 경로와 이름을 지정한다.
file_path = out_folder / (filename + ".txt")

# 파일을 생성하고 내용을 쓴다.
with open(file_path, "w") as f:
    f.write(image_url)
