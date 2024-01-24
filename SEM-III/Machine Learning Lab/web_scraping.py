import requests
from bs4 import BeautifulSoup
import pandas as pd
books=[]
for i in range(2,5):
    url='https://books.toscrape.com/catalogue/page-{}.html'.format(i)
    res=requests.get(url)
    res=res.content

    soup=BeautifulSoup(res,'html.parser')

    ol=soup.find('ol')
    articles=ol.find_all('article',class_='product_pod')

    for art in articles:
        image=art.find('img')
        title=image.attrs['alt']

        star=art.find('p')
        star=star['class'][1]

        price=art.find('p',class_='price_color').text
        price=float(price[1:])
        books.append([title,price,star])
df=pd.DataFrame(books,columns=['Title','Price','StarRating'])
df.to_csv('Books.csv')