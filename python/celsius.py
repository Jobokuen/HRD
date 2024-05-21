def min():
    while True:
        try:
            celsious = input()
            celsious = float(celsious)
            break
        except ValueError:
            print("숫자만 입력해 주세요")
            continue
    fahrenheit = (float(celsious) * 9 / 5) +32
    
    print(f"섭씨온도 {celsious}는 화씨온도로 {fahrenheit:.2}입니다.")
    
if __name__ == "__main__":
    min()
    