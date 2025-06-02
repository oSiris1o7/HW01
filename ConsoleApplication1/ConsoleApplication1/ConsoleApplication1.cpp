/*-사용자로부터 5개의 숫자를 입력 받습니다.
- 입력 받은 숫자를 배열에 저장합니다.
- 배열에 저장된 숫자들의 합계와 평균을 계산합니다.
- 계산된 합계와 평균을 출력합니다.
- 배열을 인자로 넘겨 받아서 배열 원소들의 합계를 반환하는 함수를 구현해봅니다.
- 배열을 인자로 넘겨 받아서 배열 원소들의 평균을 반환하는 함수를 구현해봅니다.
- 위에서 만든 합계 함수와 평균 함수를 호출하여 합계와 평균을 출력합니다.*/


//사용자가 입력한 숫자 배열을 정렬하는 프로그램을 구현해보세요.
//
//- 정렬은 오름차순 정렬과 내림차순 정렬이 가능해야 합니다.
//- 숫자 1을 입력 받으면 오름차순 정렬, 숫자 2를 입력 받으면 내림차순 정렬을 하도록 구현해주세요.
//- `algorithm` 헤더의 `sort` 함수를 사용하지 않고 직접 구현해보세요.
//- 오름차순 정렬과 내림차순 정렬 동작을 각각 함수로 구현해보세요.



#include <iostream>
#include <string>
#include <array>

using namespace std;


int ReturnSum(array<int, 5> numbers00)
{
    int sum = 0;
    for (int num : numbers00)
    {
        sum += num;
    }
    return sum;
}

int ReturnAverage(array<int, 5> numbers00)
{
    return ReturnSum(numbers00) / numbers00.size();
}

array<int, 5> ReturnAscending(array<int, 5> number3)
{
    for (int i = 0; i < number3.size(); i++)
    {
        //int aaaa = number3[i];
        int aaaa = i;
        for (int k = i; k < number3.size(); k++)
        {
            if (number3[aaaa] > number3[k])
            {
                aaaa = k;
            }
        }

        std::swap(number3[aaaa], number3[i]);
    }



    return number3;
}

array<int, 5> ReturnDescending(array<int, 5>number3)
{
    for (int i = 0; i < number3.size(); i++)
    {
        //int aaaa = number3[i];
        int aaaa = i;
        for (int k = i; k < number3.size(); k++)
        {
            if (number3[aaaa] < number3[k])
            {
                aaaa = k;
            }
        }

        std::swap(number3[aaaa], number3[i]);
    }


    return number3;
}


void main() {

    int a;
    int b;
    int c;
    int d;
    int e;

    std::cin >> a >> b >> c >> d >> e;

    array<int, 5> numbers = { a, b, c, d, e };

    /*int sum = 0;
    for (int num : numbers)
    {
        sum += num;
    }
    int average = sum / numbers.size();*/

    cout << "Sum : " << ReturnSum(numbers) << endl;

    cout << "Average : " << ReturnAverage(numbers) << endl;



    int f;
    std::cin >> f;


    array<int, 5> numbers2;
    if (f == 2)
    {
        numbers2 = ReturnDescending(numbers);
    }
    else if (f == 1)
    {
        numbers2 = ReturnAscending(numbers);
    }

    for (int aaa : numbers2)
    {
        cout << " Sorted Numbers: " << aaa << endl;
    }


}


