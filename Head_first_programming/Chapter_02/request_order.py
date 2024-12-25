import urllib.request
price = 99.99
while price > 4.74:
    page = urllib.request.urlopen("https://markets.businessinsider.com/commodities/soybeans-price")
    text = page.read().decode("utf8")
    where = text.find("9.98")
    start_of_price = where
    end_of_price = start_of_price + 2
    price = float(text[start_of_price:end_of_price])
print("Buy")
print(price)