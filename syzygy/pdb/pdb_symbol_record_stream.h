// Copyright 2012 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// This file allows reading the content of the symbol record stream of a PDB.

#ifndef SYZYGY_PDB_PDB_SYMBOL_RECORD_STREAM_H_
#define SYZYGY_PDB_PDB_SYMBOL_RECORD_STREAM_H_

#include <vector>

#include "base/basictypes.h"
#include "syzygy/pdb/pdb_data_types.h"

namespace pdb {

// Forward declarations.
class PdbStream;

// Read the @p symbol_vector from @p stream.
bool ReadSymbolRecord(PdbStream* stream, SymbolRecordVector* symbol_vector);

}  // namespace pdb

#endif  // SYZYGY_PDB_PDB_SYMBOL_RECORD_STREAM_H_
