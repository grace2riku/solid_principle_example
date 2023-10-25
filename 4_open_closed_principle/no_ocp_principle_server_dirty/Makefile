targets = no_ocp_principle_server_dirty.app
OBJS := no_ocp_principle_server_dirty.o Boot.o SettingValueRam.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

no_ocp_principle_server_dirty.o: no_ocp_principle_server_dirty.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)