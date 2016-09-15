usage:
	@echo "usage: clean"

clean:
	rm -f *.jar
	rm -f *.class
	rm -f net/library/jiga/*.class

FrozenBubble.class class:
	javac -encoding ISO-8859-1 -source 1.2 -target 1.1 *.java
	javac -encoding ISO-8859-1 -source 1.2 -target 1.1 net/library/jiga/*.java

frozenBubble.jar jar: FrozenBubble.class
	jar cvfm frozenBubble.jar manifest.mf *.txt *.gif *.jpg *.au *.class net/library/jiga/*.class

run: frozenBubble.jar
	java -jar frozenBubble.jar

