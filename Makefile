sim:
	cl shell.c sim.c
	del shell.obj
	del sim.obj

clean:
	del shell.exe