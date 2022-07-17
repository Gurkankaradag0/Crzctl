#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include <Windows.h>
#include <cstdint>
#include <iostream>
#include "rzctl.h"
#include <Psapi.h>

PyObject* _init(PyObject* self, PyObject* args) {
	return PyBool_FromLong(rzctl::init());
}

PyObject* _mouse_move(PyObject* self, PyObject* args, PyObject* kwargs) {

	static char* keywords[] = { "x", "y", "from_start_point", NULL};
	int x;
	int y;
	bool from_start_point = false;

	if (!PyArg_ParseTupleAndKeywords(args,
		kwargs,
		"ii|i",
		keywords,
		&x,
		&y,
		&from_start_point)) {
		return NULL;
	}

	rzctl::mouse_move(x, y, from_start_point);
	return PyLong_FromLong(1);
}

PyObject* _mouse_click(PyObject* self, PyObject* args, PyObject* kwargs) {

	static char* keywords[] = { "x", NULL };
	int x;

	if (!PyArg_ParseTupleAndKeywords(args,
		kwargs,
		"i",
		keywords,
		&x)) {
		return NULL;
	}

	rzctl::mouse_click(x);
	return PyLong_FromLong(1);
}

static PyMethodDef rzctl_funcs[] = {
	{"init", _init, METH_NOARGS, NULL},
	{"move", (PyCFunction)_mouse_move, METH_VARARGS | METH_KEYWORDS, NULL},
	{"click", (PyCFunction)_mouse_click, METH_VARARGS | METH_KEYWORDS, NULL},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef rzctlmodule = {
	PyModuleDef_HEAD_INIT,
	"Crzctl",
	NULL,
	-1,
	rzctl_funcs
};

PyMODINIT_FUNC PyInit_Crzctl(void) {
	return PyModule_Create(&rzctlmodule);
}