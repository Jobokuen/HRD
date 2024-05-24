line_counter = 0
cata_header = []
customer_list = []

filename = "/home/hrd/Desktop/HRD/customers.csv"

with open(filename) as customer_data:
    
    while data := customer_data.readline():
        if not data:break
        if line_counter ==0:
            data_header = data.split(",")
            
        else:
            customer_list.append(data.split(","))
            
        line_counter += 1
        
print(f"Header:{data_header}")
for i in range(0,10):
    print(f"Data{i}: {customer_list[i]}")
print(len(customer_list))