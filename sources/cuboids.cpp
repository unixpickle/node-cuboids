#include "representation.h"
#include "stickermap.h"
#include "rotationbasis.h"
#include "cocontext.h"

using namespace v8;

void RegisterModule(Handle<Object> target) {
    CuboidObj::Init(target);
    StickerMapObj::Init(target);
    RotationBasisObj::Init(target);
    COContextObj::Init(target);
}

NODE_MODULE(cuboids, RegisterModule);