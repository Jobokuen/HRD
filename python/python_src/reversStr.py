def main():
    sentence = "I love you"
    reverse_sentence = ""
    for char in sentence:
        reverse_sentence = char + reverse_sentence
    print(reverse_sentence)
    
    print(sentence[::-1])
    

if __name__ == "__main__":
    main()
    