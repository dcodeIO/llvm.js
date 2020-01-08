Module['cstring'] = function(str) {
  if (typeof str === "number") return UTF8ToString(str);
  if (!str) return 0;
  return allocate(intArrayFromString(str), 'i8', ALLOC_NORMAL);
};

Module['carray8'] = function(arr) {
  if (!arr) return 0;
  return allocate(arr, 'i8', ALLOC_NORMAL);
};

Module['carray32'] = function(arr) {
  if (!arr) return 0;
  var ptr = allocate(arr.length << 2, 'i8', ALLOC_NORMAL);
  for (var i = 0, k = arr.length; i < k; ++i) {
    HEAP32[ptr + (i << 2) >> 2] = arr[i];
  }
  return ptr;
};
