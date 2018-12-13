# MIPS simulator
### This repository contains an instruction level-simulator for a subset of the MIPS instruction set.
#### The memory is considered to be byte-addressable. Little-endian architecture has been implemented.

Note: The makefile is created for Windows. Create your own makefile for running on Linux.
Some examples of MIPS code are also provided in the inputs folder. (.x files are .s codes converted to hexadecimal)

###### The instructions implemented are:

1. J
2. JAL
3. BEQ
4. BNE
5. BLEZ
6. BGTZ
7. ADDI
8. ADDIU
9. SLTI
10. SLTIU
11. ANDI
12. ORI
13. XORI
14. LUI
15. LB
16. LH
17. LW
18. LBU
19. LHU
20. SB
21. SH
22. SW
23. BLTZ
24. BGEZ
25. BLTZAL
26. BGEZAL
27. SLL
28. SRL
29. SRA
30. SLLV
31. SRLV
32. SRAV
33. JR
34. JALR
35. ADD
36. ADDU
37. SUB
38. SUBU
39. AND
40. OR
41. XOR
42. NOR
43. SLT
44. SLTU
45. MULT
46. MFHI
47. MFLO
48. MTHI
49. MTLO
50. MULTU
51. DIV
52. DIVU
53. SYSCALL
