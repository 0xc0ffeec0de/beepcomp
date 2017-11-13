#include <string>

const void* ERROR_ALREADY_EXISTS =    (void*) -1;
const void* INVALID_HANDLE_VALUE =    (void*) -2;
const void* ERROR_FILE_NOT_FOUND =    (void*) -3;

#define INVALID_FILE_ATTRIBUTES 1
#define FILE_ATTRIBUTE_DIRECTORY 1

#define MAX_PATH 255
#define CSIDL_PERSONAL 1
#define SHGFP_TYPE_CURRENT 2

#define TRUE 1
#define FALSE 0

#define S_OK 0
#define SW_SHOWNORMAL 2

bool CreateDirectory(const char *name, void *bla) {
	return true;
}

bool CopyFile(const char *src, const char *dst, int failIfExists) {
	return true;
}

size_t GetModuleFileName(void *, const char *name, size_t size) {
	return 0;
}

HANDLE FindFirstFile(const char *path, WIN32_FIND_DATA *fd) {
	return NULL;
}

HANDLE FindNextFile(HANDLE handle, WIN32_FIND_DATA *fd) {
	return NULL;
}

void FindClose(HANDLE handle) {
}

HRESULT SHGetFolderPath(HWND hwndOwner, int nFolder, HANDLE hToken, DWORD  dwFlags, LPTSTR pszPath) {
}

DWORD GetFileAttributes(LPTSTR path) {
	return 0;
}

DWORD GetFileAttributesA(LPTSTR path) {
	return 0;
}

void* GetLastError() {
	return (void*) 0;
}

