import pandas as pd

def main():
    folder = "/home/hrd/Desktop/HRD/data/"
    df = pd.read_excel(folder + "excel-comp-data.xlsx")
    # print(df.head())
    # print(df.head(3).T)
    # print(df["account"])
    print(df[["account","street","state"]])
    
    # 3. 행 번호를 사용한 데이터 추출
    # 기존의 리스트나 넘파이 배열의 인덱싱과 동일
    print("{df[:3]}")
    
    # 4.  행과 열을 모두 사용한 데이터 추출
    # 데이터의 일정 부분을 사각형 형태로 잘라내는 것과 비슷한 효과
    print(f"4: {df[["name","street"]][:2]}")
    # loc함수 사용 : 데이터의 인덱스 이름과 열 이름을 가지고 데이터 추출
    df.index = df["account"]
    del df["account"]
    print(df.head())
    
    df.loc[[211829,320563],["name","street"]]
    
    

if __name__=="__main__":
    main()