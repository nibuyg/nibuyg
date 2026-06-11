#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

int cardGame(int gameMoney);

int betMoney = 0;
int invent = 5;
char inventory[100][100];
int money = 50000;
int itemCount[10];
int itemEffect[10];
int inventCount = 0;

void shop();

void next_scene()
{
    printf("\n[ Enter를 누르면 계속... ]");
    while (getchar() != '\n');
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

int main()
{
    int stage = 0;
    int select = 0;
    int multiple = 0;
    int minBetMoney = 0;
    int ending = 0;
    int useShop = 1;

    

    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    printf("친구: 야 임마, 나이 30먹고 백수가 뭐냐 백수가?\n");
    printf("주인공: 불러놓고 또 무슨 시비야, 공무원 됐다고 자랑하는거야?\n");
    next_scene();

    printf("친구: 아니 그런게 아니라,,,, 내 손목 보이냐?\n");
    printf("주인공: 뭐야 그거?! 그거 몇천만원짜린데 그걸 니가 가지고있어? 복권이라도 당첨된거야?\n");
    next_scene();

    printf("친구: 아니 그런게 아니라,,, 너 혹시 '짝카지노'라고 아냐?\n");
    printf("주인공: 짝 카지노? 그게 뭔데??\n");
    next_scene();

    printf("친구: 거긴 니가 원하는 만큼 돈을 걸고 카드게임을 해. 성공하면 그만큼 돈을 준다니까!\n");
    printf("주인공: 에이, 그런 곳이 세상에 어디 있냐? 진짜면 전국에 소문 다 났지!\n");
    next_scene();

    printf("친구: 그럼 이 시계는 하늘에서 뚝 떨어졌게? 속는 셈 치고 한번 가봐, 여기 주소 적어놨어.\n");
    printf("주인공: (솔깃하며) 그럼... 너만 믿는다!\n");
    next_scene();

    printf("주인공: 여기가 '짝 카지노'인가 하는 거긴가? 생각보다 엄청 초라하네...\n");
    next_scene();

    printf("??: 짝 카지노에 오신 걸 환영합니다. 게임을 즐기시겠습니까?\n");
    printf("주인공: 네! (당연하지, 돈 벌러 왔는데!)\n");
    next_scene();

    printf("??: 그럼... [목숨을 건 짝 게임]을 시작하겠습니다.\n");
    printf("주인공: ?!?!?? 그게 뭔 미친 소리야!! 난 그딴 거 듣지 못했다고!!\n");
    next_scene();

    printf("??: 여기는 당신의 목숨을 담보로 게임을 진행하는 카지노.\n");
    printf("??: 게임에서 탈락하는 순간, 당신은 사망하게 됩니다. 그럼 잘 살아남으시길...\n");
    next_scene();

    stage++;

    while (money > 0 || stage >= 1)
    {
        if (money >= 300000000 && ending == 0)
        {
            char endSelect;
            printf("주인공: 내가 성공했어! 끝까지 맞췄다고!! 이게 다 얼마야?\n");
            next_scene();

            printf("마스터: 축하드립니다. 게임을 끝내시겠습니까?\n");
            printf("( Y / N ) : ");
            scanf(" %c", &endSelect);
            if (endSelect == 'Y' || endSelect == 'y')
            {
                next_scene();

                printf("주인공: 당연하지!! 내가 이 짓을 왜 했는데. 이제 난 부자야. 다신 이 카지노에 얼씬도 안 할거야!\n");
                next_scene();


                // [2막: 일상으로의 복귀, 그리고 지루함]
                printf("( 1달 뒤... )\n");
                next_scene();

                printf("주인공: 뭘 하든 일이 다 심심하네..\n");
                next_scene();

                printf("주인공: 그 거지같은 카지노에서 나온 뒤로 그냥 세상이 재미가 없네. 이제 돈이 얼마쯤 남았지?\n");
                next_scene();


                // [3막: 파멸의 재입장]
                printf("주인공: 딱 몇번만 더 하면...... 돈은 몇배로 불릴 수 있을것 같은데...\n");
                next_scene();

                printf("주인공: 그래. 지금 내 운이면 무조건 된다. 내가 몇판이나 이겼는데 이번이라고 설마 잃겠어?\n");
                next_scene();

                printf("??: 짝 카지노에 오신걸 환영합니다. 게임을 즐기시겠습니까?\n");
                next_scene();


                // 종료 연출
                printf("\n==================== [ 끝 ] ====================\n");
                printf("\n진행한 스테이지 수 : %d", stage);
                printf("\n보유 돈 수 : %d", money);
                ending = 1;
                break;
            }
            else if (endSelect == 'N' || endSelect == 'n')
            {
                next_scene();
                printf("주인공: (내가 목숨을 걸어서 번 돈이 고작 이정도라고?)\n");
                next_scene();

                printf("주인공: (이정도면 몇년 먹고 살 돈도 안 되는거잖아!)\n");
                next_scene();

                printf("주인공: (지금 내 실력과 운이면 여기서 몇배는 더 불릴수 있을거야......)\n");
                next_scene();

                printf("마스터: 그래서....나가실건가요?\n");
                next_scene();

                printf("주인공: 아니! 내 목숨 담보값이 이정도밖에 안 된다고?! 헛소리 집어치우고 바로 다음 카드 준비해놔!\n");
                next_scene();

                printf("마스터: 그렇게 말씀하실줄 알았습니다. 바로 다음 패 가져다드리죠.\n");
                next_scene();
                ending = 1;
                continue;
            }
        }
        if (money <= 0)
        {
            break;
        }
        if (select == 0)
        {
            printf("\n\n\n\n\n\n\n\n\n\n\n현재 보유 돈 : %d", money);
            printf("\n스테이지 : %d", stage);
            printf("\n현재 보유한 아이템 : ");
            for (int i = 0; i < invent; i++)
            {
                if (inventory[i][0] != '\0')
                {
                    printf("[ %s ] ", inventory[i]);
                }
            }
            printf("\n행동을 선택하시오");
            printf("\n[1] 카드 맞추기 게임");
            printf("\n[2] 상점");
            printf("\n선택 : ");
            scanf("%d", &select);
        }
        else if (select == 1)
        {
            minBetMoney = money / 5;
            printf("\n최소 베팅 금액 : %d", minBetMoney);
            printf("\n\n베팅할 금액을 적으시오 : ");
            scanf("%d", &betMoney);
            if (betMoney >= minBetMoney && betMoney <= money)
            {
                money -= betMoney;
                money += cardGame(multiple) * betMoney;
                multiple = 0;
                betMoney = 0;
                stage++;
                useShop = 1;
                select = 0;
            }
            else
            {
                printf("베팅 금액을 다시 적으시오");
                betMoney = 0;
            }
        }
        else if (select == 2)
        {
            if (useShop == 1)
            {
                shop();
            }
            else
            {
                printf("상점 이용 가능 횟수를 모두 소진하였습니다");
            }
            useShop = 0;
            select = 0;
        }
        else
        {
            printf("\n\n\n\n다시 선택하시오");
            select = 0;
        }
    }
    
    if (money <= 0)
    {
        printf("딜러: 게임 종료되었습니다. 참가자, 최종 패배. 담보로 잡히신 신체 포기 계약 이행 단계로 넘어갑니다.\n");
        next_scene();

        printf("주인공: 뭐야? 게임 실패했다고?! 말도 안 돼! 한 판만 더 해! 한 판만 더 하면 딸 수 있어!!\n");
        next_scene();

        printf("마스터: (..........)\n");
        next_scene();

        printf("주인공: 그럼..... 나 죽는 거야...? 진짜로...?\n");
        next_scene();

        printf("주인공: 악!! 잠깐만요!! 제발!! 제발 살려줘!!!!!!!\n");
        next_scene();

        printf("마스터: 살려줘? 우리가 너한테 얼마나 많은 시간을 소비했는데 가장 중요한 하이라이트를 포기하라고?\n");
        next_scene();

        printf("주인공: 시키는 거 다 할게요! 시키는 거 다 한다고!!! 제발 살려주세요!!!! 으아아아악!!\n");
        next_scene();

        // [4막: 마스터의 제안과 시계]
        printf("마스터: 시키는 거... 진짜 다 할 수 있습니까?\n");
        next_scene();

        printf("주인공: 네, 네!! 제발 목숨만... 목숨만 살려주세요...!\n");
        next_scene();

        printf("마스터: 좋습니다. 그럼 기회를 주죠. 당신 대신 이 게임판을 채울 새로운 사람을 데려오세요. 그럼 당신은 살려줄게요.\n");
        next_scene();

        printf("주인공: 누구나 하나 데려오면 나는 산다는거지? 바로 데려올게! 내 목숨만 살려줘\n");
        next_scene();

        printf("마스터: 알겠습니다.\n");
        next_scene();

        printf("마스터: 그럼 여기 이 시계를 가져가십시오. 사람을 현혹시킬 수단 하나정도는 필요하니까요.\n");
        next_scene();

        printf("주인공: 이 시계는...? 일단 알겠어\n");
        next_scene();

        printf("마스터: 딱 일주일입니다. 그때까지 새로운 사람을 데려오십시오\n");
        next_scene();

        // [5막: 대물림되는 지옥 (엔딩)]
        printf("(.......... 일주일 뒤, 어느 술집 ..........)\n");
        next_scene();

        printf("후배: 형... 갑자기 이런 비싼 데서 보자고 하시고... 무슨 일 있으세요? 요즘 형 연락도 잘 안 되고 해서 걱정했거든요.\n");
        next_scene();

        printf("주인공: 걱정은 무슨. 난 지금 때돈 벌었다.\n");
        next_scene();

        printf("후배: 이 시계는 뭐예요? 형 분명 최근까지 백수였잖아요! 무슨 돈이 있어서 이런걸 샀어요?\n");
        next_scene();

        printf("주인공: 너 혹시 짝카지노라고 아냐?\n");
        next_scene();

        printf("\n=================== GAME OVER (To Be Continued...) ===================\n");
        printf("\n진행한 스테이지 수 : %d", stage);
        printf("\n보유 돈 수 : %d", money);
    }
        
    return 0;
}

int eventRandom(int randomEvent)
{
    if (randomEvent >= 1 && randomEvent <= 20)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\n=========================");
        printf("\n==뒤집혀 있는 카드 섞기==");
        printf("\n=========================");
        Sleep(500);
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int cardGame(int gameMoney)
{
    int gameTry = 10;
    int itemOriginalBetMoney = 0;
    int randomEvent = 0;
    int randomResult = 0;

    char cards[8][5][50] = {

        { "┌─────┐",
          "│♠   A│",
          "│  ♠  │",
          "│A   ♠│",
          "└─────┘" },

        { "┌─────┐",
          "│♥   K│",
          "│  ♥  │",
          "│K   ♥│",
          "└─────┘" },

        { "┌─────┐",
          "│♣   Q│",
          "│  ♣  │",
          "│Q   ♣│",
          "└─────┘" },

        { "┌─────┐",
          "│♦   J│",
          "│  ♦  │",
          "│J   ♦│",
          "└─────┘" },

        { "┌─────┐",
          "│♠  10│",
          "│  ♠  │",
          "│10  ♠│",
          "└─────┘" },

        { "┌─────┐",
          "│♥   9│",
          "│  ♥  │",
          "│9   ♥│",
          "└─────┘" },

        { "┌─────┐",
          "│♣   8│",
          "│  ♣  │",
          "│8   ♣│",
          "└─────┘" },

        { "┌─────┐",
          "│♦   7│",
          "│  ♦  │",
          "│7   ♦│",
          "└─────┘" }
    };

    int output[4][4] = {
        { 11, 12, 13, 14 },
        { 21, 22, 23, 24 },
        { 31, 32, 33, 34 },
        { 41, 42, 43, 44 }
    };

    int color[4][4];

    int temp[16] = {
        0,0,
        1,1,
        2,2,
        3,3,
        4,4,
        5,5,
        6,6,
        7,7
    };

    int check[4][4] = {
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 }
    };

    srand(time(NULL));

    for (int i = 15; i > 0; i--) {

        int j = rand() % (i + 1);

        int t = temp[i];
        temp[i] = temp[j];
        temp[j] = t;
    }

    int index = 0;

    for (int row = 0; row < 4; row++) {

        for (int column = 0; column < 4; column++) {

            color[row][column] = temp[index];
            index++;
        }
    }

    int card1 = -1, card2 = -1;
    int card1Row = -1, card1Column = -1;
    int card2Row = -1, card2Column = -1;

    while (1) {
        if ((card1 != card2) &&
            (0 <= card1Row) && (card1Row < 4) &&
            (0 <= card1Column) && (card1Column < 4) &&
            (0 <= card2Row) && (card2Row < 4) &&
            (0 <= card2Column) && (card2Column < 4) &&
            (color[card1Row][card1Column]
                == color[card2Row][card2Column]) && 
            (check[card1Row][card1Column] == 1) &&
            (check[card2Row][card2Column] == 1)) {

            output[card1Row][card1Column]
                = color[card1Row][card1Column];

            output[card2Row][card2Column]
                = color[card2Row][card2Column];

            check[card1Row][card1Column] = 2;
            check[card2Row][card2Column] = 2;

        }
        else
        {
            if (check[card1Row][card1Column] == 1)
            {
                check[card1Row][card1Column] = 0;
            }
            if (check[card2Row][card2Column] == 1)
            {
                check[card2Row][card2Column] = 0;
            }
        }

        int clear = 1;

        for (int row = 0; row < 4; row++) {

            for (int column = 0; column < 4; column++) {

                if (output[row][column] > 7) {
                    clear = 0;
                }
            }
        }

        if (clear == 1)
        {

            printf("\n모든 카드를 맞췄습니다!\n");

            gameMoney += gameTry / 2;

            printf("획득 돈 : 베팅 금액의 %d배\n", gameTry / 2);

            return gameMoney;
        }

        if (gameTry <= 0)
        {
            printf("\n 실패하였습니다!\n");

            if (itemOriginalBetMoney == 1)
            {
                gameMoney += 1;
                printf("잃은 돈 : [원금 방어]로 인해 잃지 않음\n");
            }
            else
            {
                gameMoney -= 1;
                printf("잃은 돈 : 베팅 금액의 두 배\n");
            }

            return gameMoney;
        }


        if (randomResult == 1 && clear == 0 && gameTry > 0)
        {
            int mix[4][4] = {
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 }
            };

            int mixNumber[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int next = 0;
            int randomNext = 0;

            for (int row = 0; row < 4; row++)
            {

                for (int column = 0; column < 4; column++)
                {

                    if ((output[row][column] > 7) && (check[row][column] != 2))
                    {
                        mix[row][column] = 1;
                        mixNumber[next] = color[row][column];
                        printf("%d mixNumber[next]\n", mixNumber[next]);
                        printf("%d color[row][column]\n", color[row][column]);
                        next++;
                    }
                }
            }
            for (int row = 0; row < 4; row++)
            {

                for (int column = 0; column < 4; column++)
                {

                    if ((output[row][column] > 7) && (mix[row][column] == 1))
                    {
                        randomNext = rand() % next;
                        color[row][column] = mixNumber[randomNext];
                        printf("%d mixNumber[randomNext]\n", mixNumber[randomNext]);
                        printf("%d color[row][column]\n", color[row][column]);
                        for (int i = randomNext; i < next - 1; i++)
                        {
                            mixNumber[i] = mixNumber[i + 1];
                            mixNumber[i + 1] = 0;
                        }
                        next--;
                    }
                }
            }

            randomResult = 0;
        }

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        for (int row = 0; row < 4; row++)
        {

            for (int line = 0; line < 5; line++)
            {

                for (int column = 0; column < 4; column++)
                {

                    if ((output[row][column] <= 7) ||
                        (check[row][column] == 2))
                    {

                        printf("%s ",
                            cards[color[row][column]][line]);
                    }
                    else
                    {
                        check[row][column] = 0;

                        if (line == 0)
                            printf("┌─────┐ ");

                        else if (line == 1)
                            printf("│░░░░░│ ");

                        else if (line == 2)
                            printf("│ %d%d  │ ",
                                row + 1, column + 1);

                        else if (line == 3)
                            printf("│░░░░░│ ");

                        else
                            printf("└─────┘ ");
                    }
                }

                printf("\n");
            }

            printf("\n");
        }
        int selectBehave = 0;
        int originalBetMoney = betMoney;
        if (itemOriginalBetMoney == 1)
        {
            printf("\n현재 [원금 방지]가 발동 중입니다\n");
        }
        printf("\n현재 베팅 금액 : %d\n", betMoney);
        printf("남은 시도 횟수 : %d\n", gameTry);
        printf("\n[1] 카드 뒤집기");
        printf("\n[2] 아이템 사용");
        printf("\n행동을 선택하시오 : ");
        scanf("%d", &selectBehave);

        if (selectBehave == 1)
        {
            printf("첫번째 카드 선택: ");
            scanf("%d", &card1);

            card1Row = card1 / 10 - 1;
            card1Column = card1 % 10 - 1;
            
            if (check[card1Row][card1Column] == 0)
            {
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                for (int row = 0; row < 4; row++)
                {

                    for (int line = 0; line < 5; line++)
                    {

                        for (int column = 0; column < 4; column++)
                        {

                            if ((output[row][column] <= 7) ||
                                (output[row][column] == card1))
                            {

                                printf("%s ",
                                    cards[color[row][column]][line]);
                            }
                            else
                            {

                                if (line == 0)
                                    printf("┌─────┐ ");

                                else if (line == 1)
                                    printf("│░░░░░│ ");

                                else if (line == 2)
                                    printf("│ %d%d  │ ",
                                        row + 1, column + 1);

                                else if (line == 3)
                                    printf("│░░░░░│ ");

                                else
                                    printf("└─────┘ ");
                            }
                        }

                        printf("\n");
                    }

                    printf("\n");
                }
                check[card1Row][card1Column] = 1;
            }
            else
            {
                printf("\n잘못된 카드입니다. 다시 고르세요.\n");
                getchar();
                getchar();
                card1 = -1;
                selectBehave = 0;
                continue;
            }

            if (!((0 <= card1Row) && (card1Row < 4) &&
                (0 <= card1Column) && (card1Column < 4)))
            {

                printf("\n잘못된 카드입니다. 다시 고르세요.\n");
                getchar();
                getchar();
                selectBehave = 0;
                continue;
            }

            printf("두번째 카드 선택: ");
            scanf("%d", &card2);

            if (card1 != card2)
            {
                card2Row = card2 / 10 - 1;
                card2Column = card2 % 10 - 1;
            }
            else
            {
                printf("\n잘못된 카드입니다. 다시 고르세요.\n");
                getchar();
                getchar();
                gameTry--;
                check[card1Row][card1Column] = 0;
                selectBehave = 0;
                continue;
            }

            if (check[card2Row][card2Column] == 0)
            {
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                for (int row = 0; row < 4; row++)
                {

                    for (int line = 0; line < 5; line++)
                    {

                        for (int column = 0; column < 4; column++)
                        {

                            if ((output[row][column] <= 7) ||
                                (output[row][column] == card1) ||
                                (output[row][column] == card2))
                            {

                                printf("%s ",
                                    cards[color[row][column]][line]);
                            }
                            else
                            {

                                if (line == 0)
                                    printf("┌─────┐ ");

                                else if (line == 1)
                                    printf("│░░░░░│ ");

                                else if (line == 2)
                                    printf("│ %d%d  │ ",
                                        row + 1, column + 1);

                                else if (line == 3)
                                    printf("│░░░░░│ ");

                                else
                                    printf("└─────┘ ");
                            }
                        }

                        printf("\n");
                    }

                    printf("\n");
                }
                Sleep(500);
                check[card2Row][card2Column] = 1;
            }
            else
            {
                printf("\n잘못된 카드입니다. 다시 고르세요.\n");
                getchar();
                getchar();
                card2 = -1;
                gameTry--;
                selectBehave = 0;
                continue;
            }


            if (!((0 <= card2Row) && (card2Row < 4) &&
                (0 <= card2Column) && (card2Column < 4)))
            {

                printf("\n잘못된 카드입니다. 다시 고르세요.\n");
                getchar();
                getchar();
                selectBehave = 0;
                continue;
            }
            else
            {
                randomEvent = rand() % 100 + 1;
                randomResult = eventRandom(randomEvent);
                if (color[card1Row][card1Column] != color[card2Row][card2Column])
                {
                    gameTry--;
                }
                selectBehave = 0;
            }
        }
        else if (selectBehave == 2)
        {
            printf("\n현재 보유 중인 아이템 : \n");
            for (int i = 0; i < invent; i++)
            {
                if (inventory[i][0] != '\0')
                {
                    printf("[ %d - %s]\n", i + 1, inventory[i]);
                }
            }
            printf("아이템을 선택하시오 : ");
            int selectitem = 0;
            scanf("%d", &selectitem);
            if (itemEffect[selectitem - 1] == 1)
            {
                gameTry += 3;
                strcpy(inventory[selectitem - 1], "\0");
                for (int i = selectitem - 1; i < inventCount - 1; i++)
                {
                    strcpy(inventory[i], inventory[i + 1]);
                    strcpy(inventory[i + 1], "\0");
                    itemEffect[i] = itemEffect[i + 1];
                    itemEffect[i + 1] = 0;
                }
                selectBehave = 0;
            }
            else if (itemEffect[selectitem - 1] == 2)
            {
                int checkCard = -1;
                int row = -1;
                int column = -1;
                printf("\n확인하고 싶은 카드를 고르시오 : ");
                scanf("%d", &checkCard);
                
                row = checkCard / 10 - 1;
                column = checkCard % 10 - 1;
                printf("\n그 카드는 아래와 같습니다 \n");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n[ %d번 카드 ]\n", checkCard);
                for (int line = 0; line < 5; line++)
                {
                    printf("%s \n",
                        cards[color[row][column]][line]);
                }

                strcpy(inventory[selectitem - 1], "\0");
                for (int i = selectitem - 1; i < inventCount - 1; i++)
                {
                    strcpy(inventory[i], inventory[i + 1]);
                    strcpy(inventory[i + 1], "\0");
                    itemEffect[i] = itemEffect[i + 1];
                    itemEffect[i + 1] = 0;
                }
                Sleep(1000);
                selectBehave = 0;
            }
            else if (itemEffect[selectitem - 1] == 3)
            {
                betMoney *= 1.5;

                strcpy(inventory[selectitem - 1], "\0");
                for (int i = selectitem - 1; i < inventCount - 1; i++)
                {
                    strcpy(inventory[i], inventory[i + 1]);
                    strcpy(inventory[i + 1], "\0");
                    itemEffect[i] = itemEffect[i + 1];
                    itemEffect[i + 1] = 0;
                }
                selectBehave = 0;
            }
            else if (itemEffect[selectitem - 1] == 4)
            {
                if (itemOriginalBetMoney == 0)
                {
                    itemOriginalBetMoney = 1;
                }
                else
                {
                    printf("이미 사용 중입니다.");
                    selectBehave = 0;
                    continue;
                }

                strcpy(inventory[selectitem - 1], "\0");
                for (int i = selectitem - 1; i < inventCount - 1; i++)
                {
                    strcpy(inventory[i], inventory[i + 1]);
                    strcpy(inventory[i + 1], "\0");
                    itemEffect[i] = itemEffect[i + 1];
                    itemEffect[i + 1] = 0;
                }
                selectBehave = 0;
            }
        }
    }
}

void shop()
{
    char item[10][100] = { "횟수 더하기", "위치 보기", "베팅 금액 1.5 배", "원금 방지" };
    int price[10] = { 2000, 3000, 10000, 5000 };
    int itemAmount = 4;
    int selectItem = 0;
    int selectBehave = 0;
    int priceList[10];
    char itemList[10][100];
    int itemShopCount = 0;
    int reroll = 1;

    srand(time(NULL));

    int count = 0;
    while (inventory[count][0] != '\0')
    {
        count++;
    }

    for (int i = 0; i < 5; i++)
    {
        int j = 0;
        j = rand() % itemAmount + 0;
        priceList[i] = price[j];
        strcpy(itemList[i], item[j]);
        itemCount[i] = j + 1;
        itemShopCount++;
    }
    
    while (1)
    {
        printf("\n\n\n\n\n\n\n\n\[상점]\n");
        for (int i = 0; i < 5; i++)
        {
            if (itemList[i][0] != '\0')
            {
                printf("[ %d. %s ] ", i + 1, itemList[i]);
                printf(" - %d원\n", priceList[i]);
            }
        }
        if (reroll == 1)
        {
            printf("[ %d. 상점 새로고침 ] - 2000원", itemShopCount + 1);
        }
        printf("\n\n현재 보유 중인 아이템[%d] : ", count);
        for (int i = 0; i < invent; i++)
        {
            if (inventory[i][0] != '\0')
            {
                printf("[ %s ] ", inventory[i]);
            }
        }
        printf("\n현재 보유 돈 : %d", money);
        printf("\n\n[1] 상품 구매");
        printf("\n[2] 상점 나가기");
        printf("\n진행할 행동을 선택하시오 : ");
        scanf("%d", &selectBehave);
        if (selectBehave == 1)
        {
            printf("\n구매하실 상품을 고르시오 : ");
            scanf("%d", &selectItem);
            if (money >= priceList[selectItem - 1] && selectItem <= itemShopCount && selectItem >= 1 && count < invent)
            {
                strcpy(inventory[count], itemList[selectItem - 1]);
                money -= priceList[selectItem - 1];
                itemEffect[count] = itemCount[selectItem - 1];
                strcpy(itemList[selectItem - 1], "\0");
                for (int i = selectItem - 1; i < itemShopCount - 1; i++)
                {
                    strcpy(itemList[i], itemList[i + 1]);
                    strcpy(itemList[i + 1], "\0");
                    itemCount[i] = itemCount[i + 1];
                    itemCount[i + 1] = 0;
                    priceList[i] = priceList[i + 1];
                    priceList[i + 1] = 0;
                }
                itemShopCount--;
                count++;
                inventCount = count;
                selectItem = 0;
                selectBehave = 0;
            }
            else if (money < priceList[selectItem - 1] && selectItem <= itemShopCount && selectItem >= 1)
            {
                printf("\n돈이 부족합니다");
                selectBehave = 0;
            }
            else if (money >= 2000 && selectItem == itemShopCount + 1 && reroll == 1)
            {
                itemShopCount = 0;
                for (int i = 0; i < 5; i++)
                {
                    int j = 0;
                    j = rand() % itemAmount + 0;
                    priceList[i] = price[j];
                    strcpy(itemList[i], item[j]);
                    itemCount[i] = j + 1;
                    itemShopCount++;
                }
                money -= 2000;
                reroll = 0;
                selectBehave = 0;
            }
            else if (money < 2000 && selectItem == itemShopCount + 1 && reroll == 1)
            {
                printf("\n돈이 부족합니다");
                selectBehave = 0;
            }
            else if (selectBehave <= itemShopCount && count >= invent)
            {
                printf("저장공간이 모두 찼습니다");
                selectBehave = 0;
            }
            else
            {
                printf("\n다시 선택하시오");
                selectBehave = 0;
            }
        }
        else if (selectBehave == 2)
        {
            return;
        }
        else
        {
            printf("\n다시 선택하시오 ");
            selectBehave = 0;
        }
    } 
}