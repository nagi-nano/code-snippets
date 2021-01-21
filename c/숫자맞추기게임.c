#include <stdio.h>

int random_number(int min_num, int max_num);

int main()
{
		int usranswer;
		int answer = random_number(1,10);

		printf("컴퓨터가 생각한 숫자를 맞춰 보세요! ");

		while(1)
		{
				scanf("%d", &usranswer);
				if(usranswer == answer)
				{
						printf("맞추셨군요 \n");
						break;
				}
				else if(usranswer > answer){
						printf("입력하신 값보다 정답이 작습니다. \n");
				}
				else {
						printf("입력하신 값보다 정답이 큽니다. \n");
				}
		}
		return 0;
}

 int random_number(int min_num, int max_num)
    {
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1; // include max_num in output
        } else {
            low_num = max_num + 1; // include max_num in output
            hi_num = min_num;
        }

        srand(time(NULL));
        result = (rand() % (hi_num - low_num)) + low_num;
        return result;
    }

