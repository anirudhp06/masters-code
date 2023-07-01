from selenium import webdriver #Webdriver for selenium
from selenium.webdriver.chrome.service import Service #Required to load chrome driver
from selenium.webdriver.common.by import By
from time import sleep
service=Service('C:/drivers/chromedriver.exe')
driver=webdriver.Chrome(service=service)
driver.get(url='https://www.google.com')
if driver.title=='Google':
    print('Pass')
else:
    print('Fail')