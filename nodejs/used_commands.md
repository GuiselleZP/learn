1. **See the version of Node.js**

	```
	node --version
	```
1. **Execute a file with '.js' terminal in Node.js**

	```
	node nameFile.js
	```

1. **Import functions from other modules**

	This function takes the path from the root, so you must indicate the path
	of the module to be imported.

	If the module is in the same folder, `./` must be added to the beginning of
	the file name.

	```
	require("./nameModule.js");
	```

	For example:

	```
	require("/root/Documentos/learn/nodejs/project/math.js")
	```

	Is equal to:

	```
	require("./math.js")
	```

	Everything that is imported can be stored in a constant as follows:

	```
	constant constantName = require("modulePath.js")
	```

	For example:

	```
	const math = require("./math.js")
	```

1. **Export functions**

	The name of the function to be exported and how to call from another module
	must be indicated. This is done with the following syntax:

	```
	exports.originalNameOfTheFunction = nameUsedInOtherModules;
	```

	For example:

	```
	exports.add = suma;
	exports.substract = substract;
	```

	This procedure must be done for each function that you want to export.
	min 30.
