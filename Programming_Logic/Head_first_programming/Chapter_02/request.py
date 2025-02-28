import urllib.request

page = urllib.request.urlopen("https://markets.businessinsider.com/commodities/soybeans-price")
text = page.read().decode("utf8")
s = text.find("9.98")
star_price = int(s)
end_price = star_price + 4
print_text = text[star_price:end_price]
compare = float(print_text)
if compare < 10:
    print("Price is okey " + print_text)
else:
    exit()
    
