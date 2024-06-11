def yield_exam():
    print("yield 함수가 호출되었습니다.")
    yield "test"
    
def main():
    print("main 함수가 호출되었습니다.")
    yield_exam()
    print("a 지점 통과")
    
    yield_exam()
    print("b지점 통과")
    
    print(yield_exam())
    print("메인함수가 종료됨.")
    
    
if __name__ == "__main__":
    main()