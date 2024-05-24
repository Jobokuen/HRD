import csv

def main():
    seoung_nam_data = []
    header = []
    rownum = 0
    filename = 
    
    with open(filename,"r", encoding="utf8") as f:
        csv_data= csv.reader(f)
        for row in csv_data:
            if rownum == 0:
                header = row
            location = row[7]
            if location.find("성남시") != -1:
                seoung_nam_data.append(row)
            rownum +=1
    filename2 = " "
    with open(filename2,"w", encoding="utf8") as f:
        writer = csv.writer(f, delimiter="  ", quotechar="'", quoting=csv.QUOTE_ALL)
        writer.writerow(header)
        for row in seoung_nam_data:
            writer.writerow(row)
            
if __name__=="__main__":
    main()