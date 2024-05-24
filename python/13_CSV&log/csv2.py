import csv

filename = "/home/hrd/Desktop/HRD/customers.csv"
with open(filename, "r") as f:
    reader = csv.reader(f, delimiter=",", quotechar="'", quoting=csv.QUOTE_MINIMAL)
    for c in reader:
        print(c)
    
