from time import sleep
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

serve_obj=Service("C:\drivers\chromedriver.exe")
driver=webdriver.Chrome(service=serve_obj)

driver.maximize_window()
driver.get('https://jqueryui.com/datepicker/')
driver.switch_to.frame(0)
driver.find_element(By.XPATH,"//input[@id='datepicker']").click()
mon="June" 
yr="2020"

while True:
    month=driver.find_element(By.XPATH,"//span[@class='ui-datepicker-month']").text
    year=driver.find_element(By.XPATH,"//span[@class='ui-datepicker-year']").text

    if mon==month and yr==year:
        break
    else:
        driver.find_element(By.XPATH,"//span[@class='ui-icon ui-icon-circle-triangle-w']").click()

dates=driver.find_elements(By.XPATH,"//table/tbody/tr/td")
for date in dates:
    if date.text=="12":
        date.click()
        break
sleep(5)