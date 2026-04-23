CXX = g++
CXXFLAGS = -Wall -g

OBJS = main.o Movie.o MovieManager.o User.o UserManager.o
TARGET = movie_recommender

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp MovieManager.h UserManager.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Movie.o: Movie.cpp Movie.h
	$(CXX) $(CXXFLAGS) -c Movie.cpp

MovieManager.o: MovieManager.cpp MovieManager.h Movie.h
	$(CXX) $(CXXFLAGS) -c MovieManager.cpp

User.o: User.cpp User.h
	$(CXX) $(CXXFLAGS) -c User.cpp

UserManager.o: UserManager.cpp UserManager.h User.h
	$(CXX) $(CXXFLAGS) -c UserManager.cpp

clean:
	rm -f *.o $(TARGET)