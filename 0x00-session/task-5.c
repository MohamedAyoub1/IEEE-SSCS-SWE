ayoub@DESKTOP-NQNICHG:~/IEEE_SSCS_SWE$ wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/all_in_one.c
ayoub@DESKTOP-NQNICHG:~/IEEE_SSCS_SWE$ ls
0x00-session  C_Tasks  README.md  Trials  all_in_one.c
ayoub@DESKTOP-NQNICHG:~/IEEE_SSCS_SWE$ gcc all_in_one.c -o main
ayoub@DESKTOP-NQNICHG:~/IEEE_SSCS_SWE$ ls
0x00-session  C_Tasks  README.md  Trials  all_in_one.c  main  numbers.txt
ayoub@DESKTOP-NQNICHG:~/IEEE_SSCS_SWE$ ./main <numbers.txt >output.txt 2>error.txt
ayoub@DESKTOP-NQNICHG:~/IEEE_SSCS_SWE$ ls
0x00-session  C_Tasks  README.md  Trials  all_in_one.c  error.txt  main  numbers.txt  output.txt
