﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/GlueSchema.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a data target that writes to Amazon S3 in Apache Parquet columnar
   * storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JDBCConnectorTarget">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API JDBCConnectorTarget
  {
  public:
    JDBCConnectorTarget();
    JDBCConnectorTarget(Aws::Utils::Json::JsonView jsonValue);
    JDBCConnectorTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data target.</p>
     */
    inline JDBCConnectorTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline JDBCConnectorTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data target.</p>
     */
    inline JDBCConnectorTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline JDBCConnectorTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline JDBCConnectorTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline JDBCConnectorTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline JDBCConnectorTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline JDBCConnectorTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline JDBCConnectorTarget& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline JDBCConnectorTarget& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline JDBCConnectorTarget& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The name of the table in the data target.</p>
     */
    inline const Aws::String& GetConnectionTable() const{ return m_connectionTable; }

    /**
     * <p>The name of the table in the data target.</p>
     */
    inline bool ConnectionTableHasBeenSet() const { return m_connectionTableHasBeenSet; }

    /**
     * <p>The name of the table in the data target.</p>
     */
    inline void SetConnectionTable(const Aws::String& value) { m_connectionTableHasBeenSet = true; m_connectionTable = value; }

    /**
     * <p>The name of the table in the data target.</p>
     */
    inline void SetConnectionTable(Aws::String&& value) { m_connectionTableHasBeenSet = true; m_connectionTable = std::move(value); }

    /**
     * <p>The name of the table in the data target.</p>
     */
    inline void SetConnectionTable(const char* value) { m_connectionTableHasBeenSet = true; m_connectionTable.assign(value); }

    /**
     * <p>The name of the table in the data target.</p>
     */
    inline JDBCConnectorTarget& WithConnectionTable(const Aws::String& value) { SetConnectionTable(value); return *this;}

    /**
     * <p>The name of the table in the data target.</p>
     */
    inline JDBCConnectorTarget& WithConnectionTable(Aws::String&& value) { SetConnectionTable(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the data target.</p>
     */
    inline JDBCConnectorTarget& WithConnectionTable(const char* value) { SetConnectionTable(value); return *this;}


    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }

    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }

    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline void SetConnectorName(const Aws::String& value) { m_connectorNameHasBeenSet = true; m_connectorName = value; }

    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline void SetConnectorName(Aws::String&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::move(value); }

    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline void SetConnectorName(const char* value) { m_connectorNameHasBeenSet = true; m_connectorName.assign(value); }

    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline JDBCConnectorTarget& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}

    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline JDBCConnectorTarget& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}

    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline JDBCConnectorTarget& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}


    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline const Aws::String& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline void SetConnectionType(const Aws::String& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline void SetConnectionType(Aws::String&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline void SetConnectionType(const char* value) { m_connectionTypeHasBeenSet = true; m_connectionType.assign(value); }

    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline JDBCConnectorTarget& WithConnectionType(const Aws::String& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline JDBCConnectorTarget& WithConnectionType(Aws::String&& value) { SetConnectionType(std::move(value)); return *this;}

    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline JDBCConnectorTarget& WithConnectionType(const char* value) { SetConnectionType(value); return *this;}


    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const{ return m_additionalOptions; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline void SetAdditionalOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline void SetAdditionalOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& WithAdditionalOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalOptions(value); return *this;}

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& WithAdditionalOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalOptions(std::move(value)); return *this;}

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& AddAdditionalOptions(const Aws::String& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& AddAdditionalOptions(Aws::String&& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& AddAdditionalOptions(const Aws::String& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& AddAdditionalOptions(Aws::String&& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& AddAdditionalOptions(const char* key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& AddAdditionalOptions(Aws::String&& key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline JDBCConnectorTarget& AddAdditionalOptions(const char* key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }


    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }

    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }

    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }

    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }

    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline JDBCConnectorTarget& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}

    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline JDBCConnectorTarget& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}

    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline JDBCConnectorTarget& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }

    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline JDBCConnectorTarget& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_connectionTable;
    bool m_connectionTableHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
