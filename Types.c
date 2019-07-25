#include "not_c.h"

char *types = {
	"string",
	"int",
	"bool",
	"flag"
};

var build(char *type, void *value)
{
	var result = {
		NULL,
		NULL,
		NULL
	};
	if (!type || !value)
		return result;
	if (check_type(type))
}

int check_type(char *type)
{
	int i;

	i = 0;
	while(types[i])
	{
		if (types[i] == type)
			return i;
		i++;
	}
	return -1;
}