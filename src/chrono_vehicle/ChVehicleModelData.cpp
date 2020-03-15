// =============================================================================
// PROJECT CHRONO - http://projectchrono.org
//
// Copyright (c) 2014 projectchrono.org
// All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found
// in the LICENSE file at the top level of the distribution and at
// http://projectchrono.org/license-chrono.txt.
//
// =============================================================================
// Authors: Radu Serban
// =============================================================================
//
// Global functions for accessing the Chrono::Vehicle model data.
//
// =============================================================================

#include "chrono/core/ChGlobal.h"
#include "chrono_vehicle/ChVehicleModelData.h"

namespace chrono {
namespace vehicle {

static std::string chrono_vehicle_data_path("../data/vehicle/");
static std::string current_dir_path("./");
static std::string input_dir_path("./input/");
static std::string output_dir_path("./output/");
// Set the path to the Chrono::Vehicle data directory (ATTENTION: not thread safe).
void SetDataPath(const std::string& path) {
    chrono_vehicle_data_path = path;
}

// Obtain the current path to the Chrono::Vehicle data directory (thread safe).
const std::string& GetDataPath() {
    return chrono_vehicle_data_path;
}

// Get the complete path to the specified filename (thread safe).
// The filename is assumed to be given relative to the Chrono::Vehicle model
// data directory.
std::string GetDataFile(const std::string& filename) {
    return chrono_vehicle_data_path + filename;
}
//current dir
void SetCurrentDirPath(const std::string& path){
    current_dir_path = path;
}

const std::string& GetCurrentDirPath() {
    return current_dir_path;
}

std::string GetCurrentDirDataFile(const std::string& filename){
    return current_dir_path + filename;
}

//input dir
void SetinputDirPath(const std::string& input_dir_name){
    input_dir_path = current_dir_path + "/" + input_dir_name;
}

const std::string& GetinputDirPath(){
    return input_dir_path;
}

std::string GetinputDirDataFile(const std::string& filename){
    return input_dir_path + "/" + filename;   
}

//output dir
void SetoutputDirPath(const std::string& output_dir_name){
    output_dir_path = current_dir_path + "/" + output_dir_name;
}

const std::string& GetoutputDirPath(){
    return output_dir_path;
}

std::string GetoutputDirDataFile(const std::string& filename){
    return output_dir_path + "/" + filename;   
}


}  // end namespace vehicle
}  // end namespace chrono
