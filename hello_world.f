       program hello_world
       implicit none
c
       character*32 text
       integer data
c
       CALL STARTCOUNTER
       text = 'Hello World'
       write (*,*) text
       CALL STOPCOUNTER
       
       data = 999
       print *, data
       data = data + 1
       CALL PASSPARAMETERS(data)
c
       end
