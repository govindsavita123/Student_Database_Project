a.out:main.o add_record.o display_record.o sync_record.o save_record.o delete_record.o getstring.o find_record.o edit_record.o reverse_print.o sort_record.o reverse_record.o myitoa.o
	cc main.o add_record.o display_record.o sync_record.o save_record.o delete_record.o getstring.o find_record.o edit_record.o reverse_print.o sort_record.o reverse_record.o myitoa.o
main.o:main.c
	cc -c main.c
add_record.o:add_record.c
	cc -c add_record.c
display_record.o:display_record.c
	cc -c display_record.c
sync_record.o:sync_record.c
	cc -c sync_record.c
save_record.o:save_record.c
	cc -c save_record.c
delete_record.o:delete_record.c
	cc -c delete_record.c
find_record.o:find_record.c
	cc -c find_record.c
edit_record.o:edit_record.c
	cc -c edit_record.c
reverse_print.o:reverse_print.c
	cc -c reverse_print.c
reverse_record.o:reverse_record.c
	cc -c reverse_record.c
sort_record.o:sort_record.c
	cc -c sort_record.c
getstring.o:getstring.c
	cc -c getstring.c
myitoa.o:myitoa.c
	cc -c myitoa.c
