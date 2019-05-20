int __libc_start_main(int *(main) (int, char * *, char * *), int argc, char * * ubp_av, void (*init) (void), void (*fini) (void), void (*rtld_fini) (void), void (* stack_end));
void __attribute ((constructor)) binit(void);
void __attribute ((destructor)) bfini(void);

int setxattr(const char *path, const char *name, const void *value, size_t size, int flags);
int lsetxattr(const char *path, const char *name, const void *value, size_t size, int flags);
int fsetxattr(int fd, const char *name, const void *value, size_t size, int flags);
ssize_t getxattr(const char *path, const char *name, void *value, size_t size);
ssize_t lgetxattr(const char *path, const char *name, void *value, size_t size);
ssize_t fgetxattr(int fd, const char *name, void *value, size_t size);
ssize_t listxattr(const char *path, char *list, size_t size);
ssize_t llistxattr(const char *path, char *list, size_t size);
ssize_t flistxattr(int fd, char *list, size_t size);
int removexattr(const char *path, const char *name);
int lremovexattr(const char *path, const char *name);
int fremovexattr(int fd, const char *name);

int execve(const char *filename, char *const argv[], char *const envp[]);
gid_t getgid(void);
int open(const char *pathname,int flags,mode_t mode);
int open64(const char *pathname,int flags,mode_t mode);
int access(const char *pathname, int amode);
int creat(const char *pathname, mode_t mode);
FILE *fopen(const char *pathname, const char *mode);
FILE *fopen64(const char *pathname, const char *mode);
int mkdir(const char *pathname, mode_t mode);
int rmdir(const char *pathname);
struct dirent *readdir(DIR *dirp);
struct dirent64 *readdir64(DIR *dirp);
DIR *opendir(const char *pathname);
DIR *opendir64(const char *pathname);
DIR *fdopendir(int fd);
int chdir(const char *pathname);
int fchdir(int fd);
int chroot(const char *path);
ssize_t read(int fd, void *buf, size_t nbyte);
ssize_t write(int fd, const void *buf, size_t nbyte);
int stat(const char *pathname, struct stat *buf);
int stat64(const char *pathname, struct stat64 *buf);
int fstat(int fd, struct stat *buf);
int fstat64(int fd, struct stat64 *buf);
int fstatat(int dirfd, const char *pathname, struct stat *buf, int flags);
int fstatat64(int dirfd, const char *pathname, struct stat64 *buf, int flags);
int lstat(const char *pathname, struct stat *buf);
int lstat64(const char *pathname, struct stat64 *buf);
int __xstat(int version, const char *pathname, struct stat *buf);
int __xstat64(int version, const char *pathname, struct stat64 *buf);
int __fxstat(int version, int fd, struct stat *buf);
int __fxstat64(int version, int fd, struct stat64 *buf);
int __lxstat(int version, const char *pathname, struct stat *buf);
int __lxstat64(int version, const char *pathname, struct stat64 *buf);
int unlink(const char *pathname);
int unlinkat(int dirfd, const char *pathname, int flags);
int chown(const char *pathname, uid_t owner, gid_t group);
int chmod(const char *pathname, mode_t mode);
int fchmod(int fd, mode_t mode);
int fchmodat(int dirfd, const char *pathname, mode_t mode, int flags);

typeof(setxattr) *o_setxattr;
typeof(lsetxattr) *o_lsetxattr;
typeof(fsetxattr) *o_fsetxattr;
typeof(getxattr) *o_getxattr;
typeof(lgetxattr) *o_lgetxattr;
typeof(fgetxattr) *o_fgetxattr;
typeof(listxattr) *o_listxattr;
typeof(llistxattr) *o_llistxattr;
typeof(flistxattr) *o_flistxattr;
typeof(removexattr) *o_removexattr;
typeof(lremovexattr) *o_lremovexattr;
typeof(fremovexattr) *o_fremovexattr;

typeof(__libc_start_main) *o_libc_start_main;
typeof(execve) *o_execve;
typeof(getgid) *o_getgid;
typeof(open) *o_open;
typeof(open64) *o_open64;
typeof(access) *o_access;
typeof(creat) *o_creat;
typeof(fopen) *o_fopen;
typeof(fopen64) *o_fopen64;
typeof(mkdir) *o_mkdir;
typeof(rmdir) *o_rmdir;
typeof(readdir) *o_readdir;
typeof(readdir64) *o_readdir64;
typeof(opendir) *o_opendir;
typeof(opendir64) *o_opendir64;
typeof(fdopendir) *o_fdopendir;
typeof(chdir) *o_chdir;
typeof(fchdir) *o_fchdir;
typeof(chroot) *o_chroot;
typeof(read) *o_read;
typeof(write) *o_write;
typeof(stat) *o_stat;
typeof(stat64) *o_stat64;
typeof(fstat) *o_fstat;
typeof(fstat64) *o_fstat64;
typeof(fstatat) *o_fstatat;
typeof(fstatat64) *o_fstatat64;
typeof(lstat) *o_lstat;
typeof(lstat64) *o_lstat64;
typeof(__xstat) *o_xstat;
typeof(__xstat64) *o_xstat64;
typeof(__fxstat) *o_fxstat;
typeof(__fxstat64) *o_fxstat64;
typeof(__lxstat) *o_lxstat;
typeof(__lxstat64) *o_lxstat64;
typeof(unlink) *o_unlink;
typeof(unlinkat) *o_unlinkat;
typeof(chown) *o_chown;
typeof(chmod) *o_chmod;
typeof(fchmod) *o_fchmod;
typeof(fchmodat) *o_fchmodat;
