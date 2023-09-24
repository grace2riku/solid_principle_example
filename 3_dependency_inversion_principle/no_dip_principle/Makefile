targets = no_dip_principle.app
OBJS := no_dip_principle.o Boot.o SettingValueRam.o

$(targets): $(OBJS)
	g++ $(OBJS) -o $(targets)

.cpp.o:
	g++ -std=c++11 -c $<

no_dip_principle.o: no_dip_principle.cpp
Boot.o: Boot.cpp Boot.h
SettingValueRam.o: SettingValueRam.cpp SettingValueRam.h

.PHONY: clean
clean:
	rm -f $(targets) $(OBJS)