# demonstrate the Usage of locators and CSS Selectors
import time
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

serv_obj=Service("C:\drivers\chromedriver.exe")
driver=webdriver.Chrome(service=serv_obj)


driver.get("https://demo.nopcommerce.com/")
driver.maximize_window()

#1. Locate ID and Name

driver.find_element(By.ID, "small-searchterms").send_keys("Lenovo Laptop")
#driver.find_element(By.NAME, "q").send_keys("Lenovo Laptop")

#2. Locate link text and partial link text

# if we want to identify the link text of the page for both register and Log in...

driver.find_element(By.LINK_TEXT, "Register").click()

driver.find_element(By.LINK_TEXT, "Log in").click()

#now is partial link text for both register and Log in

driver.find_element(By.PARTIAL_LINK_TEXT, "Reg").click()
driver.find_element(By.PARTIAL_LINK_TEXT, "in").click()

#3.Class name and tag name

driver.get("https://www.amazon.in/")
driver.maximize_window()

# len(sliders) is used to give the count of sliders on amazon web page
sliders = driver.find_elements(By.CLASS_NAME, "a-carousel-card")
print("the number of sliders are:", len(sliders))

links = driver.find_elements(By.TAG_NAME, "a")
for i in links:
    print(i)
    print()

print("the number of sliders are:", len(links))

#CSS Selectors

driver.get("https://www.facebook.com/")

#1.Tag and ID is our first combination
driver.find_element(By.CSS_SELECTOR, "input#email").send_keys("tejasdhongadi@gmail.com")

# Here we can also access the element by removing the tagname, But "#" should be present

driver.find_element(By.CSS_SELECTOR, "#email").send_keys("tejasdhongadi@gmail.com")

#2.tag and class
driver.find_element(By.CSS_SELECTOR, "input.inputtext").send_keys("tejasdhongadi@gmail.com")

#3.tag and attribute
driver.find_element(By.CSS_SELECTOR, "input[data-testid=royal_email]").send_keys("tejasdhongadi@gmail.com")

# Here, we can also access the element by removing the tagname, But "#" should be present
driver.find_element(By.CSS_SELECTOR, "[data-testid=royal_email]").send_keys("tejasdhongadi@gmail.com")

#4.tag class attribute
driver.find_element(By.CSS_SELECTOR, "input.inputtext[data-testid=royal_pass]").send_keys("lol")

# Here, we can also access the element by removing the tagname, But "#" should be present
driver.find_element(By.CSS_SELECTOR, "[data-testid=royal_pass]").send_keys("lol")

time.sleep(3)