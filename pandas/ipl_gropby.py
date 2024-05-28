import pandas as pd


def main():
    # 그룹별 집계 사용하기
    ipl_data = {'Team': ['Riders', 'Riders', 'Devils', 'Devils', 'Kings',
                         'kings', 'Kings', 'Kings', 'Riders', 'Royals', 'Royals',
                         'Riders'],
                'Rank': [1, 2, 2, 3, 3, 4, 1, 1, 2, 4, 1, 2],
                'Year': [2014, 2015, 2014, 2015, 2014, 2015, 2016, 2017, 2016, 2014, 2015, 2017],
                'Points': [876, 789, 863, 673, 741, 812, 756, 788, 694, 701, 804, 690]}
    df = pd.DataFrame(ipl_data)
    print(df)
    
    #그룹별 집계의 기본형
    print(df.groupby("Team")["Points"].sum())
    print(df.groupby("Team")["Points"].count())
    
    # 멀티 인덱스 그룹별 집계
    print(df.groupby("Team","Year")["Points"].sum())
    
    # 멀티 인덱스
    # 인덱스 요소 확인
    mulit_groupby = df.groupby(["Team","Year"])["Points"].sum()
    print(mulit_groupby)
    
    # 인덱스의 추출
    print(mulit_groupby["Devils":"King"])
    
    # 기존 인덱스를 기준으로 묶인 데이터에서 두 번째 인덱스를 열로 변화시켜 피봇 테이블과 유사한 형태로 출력
    print(mulit_groupby.unstack())
    
    # 인덱스간에 레벨 변경 / sort_index함수 사용 >> 변경된 인덱스 중 첫 번째 인덱스를 기준으로 데이터 재정렬
    print(mulit_groupby.swaplevel().sort_index())
    
    
if __name__ == "__main__":
    main()