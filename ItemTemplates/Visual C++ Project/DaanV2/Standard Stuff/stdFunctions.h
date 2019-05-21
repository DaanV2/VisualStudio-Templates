#define Property($Type, $Variable, $Name) property $Type $Name { \
	$Type get() { return this->$Variable; }\
	void set($Type value) { this->$Variable = value; } };

#define Property_WithEvent($Type, $Variable, $Name, $Event) property $Type $Name { \
	$Type get() { return this->$Variable; }\
	void set($Type value) { this->$Variable = value; this->$Event(this); } };

#define Property_ReadOnly($Type, $Variable, $Name) property $Type $Name { \
	$Type get() { return this->$Variable; } } };

#define InRange($Variable, $GreatherThan, $SmallerThan) $Variable > $GreatherThan && $Variable < $SmallerThan