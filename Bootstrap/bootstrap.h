#ifndef bootstrap_h
#define bootstrap_h

#define BOOTSTRAP_VERSION   (2)

void rebuildSignature(NSString *directoryPath);

int bootstrap();

int unbootstrap();

bool isBootstrapInstalled();

bool isSystemBootstrapped();


#endif /* bootstrap_h */
