from collections import defaultdict, OrderedDict

def main():
    text = """Student Debt Cancellation in the US: President Joe Biden has approved the cancellation of an additional $7.7 billion in student debt, benefiting around 160,000 borrowers. This move is part of ongoing efforts to address the student debt crisis in the United States​ (Al Jazeera)​."""

    word_count = defaultdict(lambda: 0)
    for word in text.split():
        word_count[word] += 1
    print(word_count)
    
if __name__=="__main__":
    main()